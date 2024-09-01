<template>
  <div class="app-container">
    <!--查询位置-->
    <el-form :model="queryParams" ref="queryForm" size="small" :inline="true" label-width="68px">
      <el-form-item label="关键词" prop="keyword">
        <el-input
          v-model="queryParams.keyword"
          placeholder="请输入关键词"
          clearable
          style="width: 240px"
          @keyup.enter="handleQuery"
        />
      </el-form-item>
      <el-form-item>
        <el-button type="primary" icon="el-icon-search" size="mini" @click="handleQuery">搜索</el-button>
        <el-button icon="el-icon-refresh" size="mini" @click="resetQuery">重置</el-button>
      </el-form-item>
    </el-form>

    <!--按钮位置-->
    <el-row :gutter="10" class="mb8" style="margin-bottom: 2px;">
      <el-col :span="1.5">
        <el-button
          type="primary"
          plain
          icon="el-icon-plus"
          size="mini"
          @click="handleAdd">新增</el-button>
      </el-col>
      <el-col :span="1.5">
        <el-button
          type="danger"
          plain
          icon="el-icon-delete"
          size="mini"
          :disabled="multiple"
          @click="handleDelete">删除</el-button>
      </el-col>
    </el-row>

    <!--列表-->
    <el-table :height="tableMaxHeight" stripe border v-loading="loading" :data="tableDataList" @selection-change="handleSelectionChange" ref="objectTable">
      <el-table-column type="selection" width="55" align="center"/>
      
      <el-table-column prop="userId" :show-overflow-tooltip="true" width="160" label="用户id">
      </el-table-column>

      <el-table-column prop="password" :show-overflow-tooltip="true" width="160" label="用户密码">
      </el-table-column>

      <el-table-column prop="pwd" :show-overflow-tooltip="true" width="160" label="用户密钥">
      </el-table-column>

      <el-table-column prop="email" :show-overflow-tooltip="true" width="160" label="用户邮箱">
      </el-table-column>

      <el-table-column label="操作" align="center" class-name="small-padding fixed-width" fixed="right" min-width="130">
        <template v-slot="scope">
          <el-button
            size="mini"
            type="text"
            icon="el-icon-edit"
            @click="handleUpdate(scope.row)">修改</el-button>
          <el-button
            size="mini"
            type="text"
            icon="el-icon-delete"
            @click="handleDelete(scope.row)">删除</el-button>
        </template>
      </el-table-column>
    </el-table>

    <!--分页组件-->
    <el-pagination
      @size-change="handleSizeChange"
      @current-change="handleCurrentChange"
      :current-page="queryParams.current"
      :page-sizes="[8, 20, 50, 100, 300]"
      :page-size="queryParams.size"
      layout="total, sizes, prev, pager, next, jumper"
      :total="total"
      style="float:left;margin-top: 20px;">
    </el-pagination>

    <!-- [新增/修改]弹框界面 -->
    <el-drawer
      :title="addForm.id ? '修改' : '新增'"
      v-model="drawerOpen"
      direction="rtl"
      size="50%"
    >
      <div style="overflow-y: auto; height: 80%;">
        <el-form ref="addFormRef" :model="addForm" :rules="rules" label-width="150px">

          <el-form-item label="用户id" prop="userId">
            <el-input v-model="addForm.userId" placeholder="用户id" auto-complete="off" maxlength="50" show-word-limit class="formInputWidth"></el-input>
          </el-form-item>

          <el-form-item label="用户密码" prop="password">
            <el-input v-model="addForm.password" placeholder="用户密码" auto-complete="off" maxlength="50" show-word-limit class="formInputWidth"></el-input>
          </el-form-item>

          <el-form-item label="用户密钥" prop="pwd">
            <el-input v-model="addForm.pwd" placeholder="用户密钥" auto-complete="off" maxlength="50" show-word-limit class="formInputWidth"></el-input>
          </el-form-item>

          <el-form-item label="用户邮箱" prop="email">
            <el-input v-model="addForm.email" placeholder="用户邮箱" auto-complete="off" maxlength="50" show-word-limit class="formInputWidth"></el-input>
          </el-form-item>

        </el-form>
      </div>
      <div style="text-align: center;">
        <el-button type="primary" @click="submitForm">确 定</el-button>
        <el-button @click="drawerOpen = false">取 消</el-button>
      </div>
    </el-drawer>

  </div>
</template>

<script>
  import {
    getUserTableData,
    deleteUser,
    addUser,
    updateUser,
    getUserList,
  } from "@/api/user/user";
  export default {
    name: "SysUser",
    data() {
      return {
        // 遮罩层
        loading: true,
        // 选中数组
        ids: [],
        // 非单个禁用
        single: true,
        // 非多个禁用
        multiple: true,
        // 总条数
        total: 0,
        // 参数表格数据
        tableDataList: [],
        // 是否显示弹出层
        drawerOpen: false,
        // 查询参数
        queryParams: {
          current: 1,
          size: 8,
          keyword: undefined,
        },
        // 表单参数
        addForm: {},
        // 表单校验
        rules: {
          id: [{ required: true, message: '主键不能为空', trigger: 'blur' }],
          userId: [{ required: true, message: '用户id不能为空', trigger: 'blur' }],
          password: [{ required: true, message: '用户密码不能为空', trigger: 'blur' }],
          pwd: [{ required: true, message: '用户密钥不能为空', trigger: 'blur' }],
          email: [{ required: true, message: '用户邮箱不能为空', trigger: 'blur' }],
        },
      };
    },

    methods: {

      /** 获取列表数据方法 */
      getList() {
        this.loading = true; //打开加载圈
        getUserTableData(this.queryParams).then(result => {
          this.tableDataList = result.data.rows;
          this.total = result.data.total;
          this.loading = false;  //关闭加载圈
        });
      },

      /** 点击 搜索 按钮 */
      handleQuery() {
        this.queryParams.current = 1;
        this.getList();
      },

      /** 点击 重置 按钮 */
      resetQuery() {
        if (this.$refs['queryForm']) {
          this.$refs['queryForm'].resetFields();
        }
        this.handleQuery();
      },

      /** 选择第几页事件 */
      handleCurrentChange(current) {
        this.queryParams.current = current;
        this.getList();
      },

      /** 选择每页显示条数 */
      handleSizeChange(size) {
        this.queryParams.size = size
        this.getList();
      },

      /** 点击 新增 按钮 */
      handleAdd() {
        this.addForm = Object.assign({}, {});
        this.drawerOpen = true;
      },

      /** 多选框选中数据事件 */
      handleSelectionChange(selection) {
        this.ids = selection.map(item => item.id);//将数组里面的ID取出来形成ids集合
        this.single = selection.length != 1;
        this.multiple = !selection.length;
      },

      /** 取消多选框选中的记录 */
      cancelSelectionChange() {
        this.$refs.objectTable.clearSelection();
      },

      /** 点击 修改 按钮 */
      handleUpdate(row) {
        this.addForm = Object.assign({}, row);
        this.drawerOpen = true;
      },

      /** 提交按钮 */
      submitForm: function () {
        this.$refs["addFormRef"].validate(valid => {
          if (valid) {
            if (this.addForm.id != undefined) {
              updateUser(this.addForm).then(result => {
                this.drawerOpen = false;
                this.getList();
              });
            } else {
              addUser(this.addForm).then(result => {
                this.drawerOpen = false;
                this.getList();
              });
            }
          }
        });
      },

      /** 删除操作 */
      handleDelete(row) {
        if (row.id) {
          this.cancelSelectionChange();//取消复选框
          this.ids.push(row.id);
        }
        const tempIds = this.ids;
        let tishi = '';
        if (tempIds.length == 0) {
          tishi = '您确定要删除这条数据吗';
        } else {
          tishi = '您确定要删除这【' + tempIds.length + '】条数据吗？';
        }
        let param = {
          "ids": tempIds,
        }
        this.$confirm(tishi, '请确认', {
          confirmButtonText: '确定',
          cancelButtonText: '取消',
          type: 'warning'
        }).then(() => {
          deleteUser(param).then(result => {
            this.getList();
          });
        }).catch(() => {
          console.log('已取消删除操作');
        });
      },
    },

    //计算表格高度
    computed: {
      tableMaxHeight() {
        return window.innerHeight - 280 + 'px'
      }
    },

    //钩子函数，进入页面就会加载的
    created() {
      this.getList();
    },
  };
</script>

<style scoped>
</style>
