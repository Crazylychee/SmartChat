import {Sequelize , DataTypes } from 'sequelize';


// eslint-disable-next-line @typescript-eslint/no-unused-vars
let sequelize: null | Sequelize = null;


function useSqlite3Connect() {
  if(!sequelize) {
    sequelize = new Sequelize({
      dialect: 'sqlite',
      storage: './mydb.sqlite'
    });
  }

  return ({ connection: sequelize })

}

export async function loginSqlite3Client() {

  const { connection } = useSqlite3Connect()
  console.log('开始登录', connection)
  connection.authenticate()
    .then(() => {
      console.log('Connection has been established successfully.');
    })
    .catch((err: any) => {
      console.error('Unable to connect to the database:', err);
    });

}

