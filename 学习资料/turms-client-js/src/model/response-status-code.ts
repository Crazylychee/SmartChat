enum Code {

    // **********************************************************
    // * Defined on the client side
    // **********************************************************

    // **********************************************************
    // * For application error
    // **********************************************************

    // Client - Common
    CONNECT_TIMEOUT = 1,

    DATA_NOT_FOUND = 10,

    HTTP_ERROR = 90,
    HTTP_NOT_SUCCESSFUL_RESPONSE,

    // Client - Request
    INVALID_REQUEST = 100,
    CLIENT_REQUESTS_TOO_FREQUENT,
    REQUEST_TIMEOUT,
    ILLEGAL_ARGUMENT,

    // Server - Notification
    INVALID_NOTIFICATION = 200,
    INVALID_RESPONSE,

    // **********************************************************
    // * For business error
    // **********************************************************

    // User
    CLIENT_SESSION_ALREADY_ESTABLISHED = 300,
    CLIENT_SESSION_HAS_BEEN_CLOSED,

    // Group

    // Conversation

    // Message

    // Storage

    // **********************************************************
    // * Defined on the server side
    // **********************************************************

    // Successful responses
    OK = 1000,
    NO_CONTENT,
    ALREADY_UP_TO_DATE,

    //**********************************************************
    //* For application error
    //**********************************************************

    // Client
    INVALID_REQUEST_FROM_SERVER = 1100,
    CLIENT_REQUESTS_TOO_FREQUENT_FROM_SERVER,
    ILLEGAL_ARGUMENT_FROM_SERVER,
    RECORD_CONTAINS_DUPLICATE_KEY,
    REQUESTED_RECORDS_TOO_MANY,
    SEND_REQUEST_FROM_NONEXISTENT_SESSION,
    UNAUTHORIZED_REQUEST,

    // Server
    SERVER_INTERNAL_ERROR = 1200,
    SERVER_UNAVAILABLE,

    // **********************************************************
    // * For business error
    // **********************************************************

    // User

    // User - Login
    UNSUPPORTED_CLIENT_VERSION = 2000,

    LOGIN_TIMEOUT = 2010,
    LOGIN_AUTHENTICATION_FAILED,
    LOGGING_IN_USER_NOT_ACTIVE,
    LOGIN_FROM_FORBIDDEN_DEVICE_TYPE,

    // User - Session
    SESSION_SIMULTANEOUS_CONFLICTS_DECLINE = 2100,
    SESSION_SIMULTANEOUS_CONFLICTS_NOTIFY,
    SESSION_SIMULTANEOUS_CONFLICTS_OFFLINE,
    CREATE_EXISTING_SESSION,
    UPDATE_HEARTBEAT_OF_NONEXISTENT_SESSION,

    // User - Location
    USER_LOCATION_RELATED_FEATURES_ARE_DISABLED = 2200,
    QUERYING_NEAREST_USERS_BY_SESSION_ID_IS_DISABLED,

    // User - Info
    UPDATE_INFO_OF_NONEXISTENT_USER = 2300,
    NOT_FRIEND_TO_QUERY_USER_PROFILE,
    BLOCKED_USER_TO_QUERY_USER_PROFILE,

    // User - Permission
    QUERY_PERMISSION_OF_NONEXISTENT_USER = 2400,

    // User - Relationship
    ADD_NON_RELATED_USER_TO_GROUP = 2500,
    CREATE_EXISTING_RELATIONSHIP,
    CANNOT_BLOCK_ONESELF,

    // User - Friend Request
    CREATE_EXISTING_FRIEND_REQUEST = 2600,
    BLOCKED_USER_TO_SEND_FRIEND_REQUEST,
    RECALL_NON_PENDING_FRIEND_REQUEST,
    RECALLING_FRIEND_REQUEST_IS_DISABLED,
    NOT_SENDER_TO_RECALL_FRIEND_REQUEST,
    UPDATE_NON_PENDING_FRIEND_REQUEST,
    NOT_RECIPIENT_TO_UPDATE_FRIEND_REQUEST,

    // Group

    // Group - Info
    UPDATE_INFO_OF_NONEXISTENT_GROUP = 3000,
    NOT_GROUP_OWNER_TO_UPDATE_GROUP_INFO,
    NOT_GROUP_OWNER_OR_MANAGER_TO_UPDATE_GROUP_INFO,
    NOT_GROUP_MEMBER_TO_UPDATE_GROUP_INFO,

    // Group - Type
    NO_PERMISSION_TO_CREATE_GROUP_WITH_GROUP_TYPE = 3100,
    CREATE_GROUP_WITH_NONEXISTENT_GROUP_TYPE,
    UPDATING_GROUP_TYPE_IS_DISABLED,
    NOT_GROUP_OWNER_TO_UPDATE_GROUP_TYPE,
    NO_PERMISSION_TO_UPDATE_GROUP_TO_GROUP_TYPE,
    UPDATE_GROUP_TO_NONEXISTENT_GROUP_TYPE,

    // Group - Ownership
    NOT_ACTIVE_USER_TO_CREATE_GROUP = 3200,
    NOT_GROUP_OWNER_TO_TRANSFER_GROUP,
    NOT_GROUP_OWNER_TO_DELETE_GROUP,
    GROUP_SUCCESSOR_NOT_GROUP_MEMBER,
    GROUP_OWNER_QUIT_WITHOUT_SPECIFYING_SUCCESSOR,
    MAX_OWNED_GROUPS_REACHED,
    TRANSFER_NONEXISTENT_GROUP,

    // Group - Question
    NOT_GROUP_OWNER_OR_MANAGER_TO_CREATE_GROUP_QUESTION = 3300,
    NOT_GROUP_OWNER_OR_MANAGER_TO_DELETE_GROUP_QUESTION,
    NOT_GROUP_OWNER_OR_MANAGER_TO_UPDATE_GROUP_QUESTION,
    NOT_GROUP_OWNER_OR_MANAGER_TO_QUERY_GROUP_QUESTION_ANSWER,
    CREATE_GROUP_QUESTION_FOR_INACTIVE_GROUP,
    CREATE_GROUP_QUESTION_FOR_GROUP_USING_JOIN_REQUEST,
    CREATE_GROUP_QUESTION_FOR_GROUP_USING_INVITATION,
    CREATE_GROUP_QUESTION_FOR_GROUP_USING_MEMBERSHIP_REQUEST,
    GROUP_QUESTION_ANSWERER_HAS_BEEN_BLOCKED,
    GROUP_MEMBER_ANSWER_GROUP_QUESTION,
    ANSWER_INACTIVE_GROUP_QUESTION,
    ANSWER_GROUP_QUESTION_OF_INACTIVE_GROUP,

    // Group - Member
    ADD_USER_TO_GROUP_REQUIRING_USERS_APPROVAL = 3400,
    ADD_USER_TO_INACTIVE_GROUP,
    NOT_GROUP_OWNER_TO_ADD_GROUP_MANAGER,
    ADD_USER_TO_GROUP_WITH_SIZE_LIMIT_REACHED,
    ADD_BLOCKED_USER_TO_GROUP,
    NOT_GROUP_OWNER_TO_ADD_GROUP_MEMBER,
    NOT_GROUP_OWNER_OR_MANAGER_TO_ADD_GROUP_MEMBER,
    NOT_GROUP_MEMBER_TO_ADD_GROUP_MEMBER,
    NOT_GROUP_OWNER_OR_MANAGER_TO_REMOVE_GROUP_MEMBER,
    NOT_GROUP_OWNER_TO_REMOVE_GROUP_OWNER_OR_MANAGER,
    NOT_GROUP_OWNER_TO_UPDATE_GROUP_MEMBER_ROLE,
    UPDATE_GROUP_MEMBER_ROLE_OF_NONEXISTENT_GROUP,
    NOT_GROUP_OWNER_TO_UPDATE_GROUP_MEMBER_INFO,
    NOT_GROUP_OWNER_OR_MANAGER_TO_UPDATE_GROUP_MEMBER_INFO,
    NOT_GROUP_MEMBER_TO_UPDATE_GROUP_MEMBER_INFO,
    UPDATE_GROUP_MEMBER_INFO_OF_NONEXISTENT_GROUP,
    UPDATE_INFO_OF_NONEXISTENT_GROUP_MEMBER,
    NOT_GROUP_OWNER_OR_MANAGER_TO_MUTE_GROUP_MEMBER,
    MUTE_GROUP_MEMBER_WITH_ROLE_EQUAL_TO_OR_HIGHER_THAN_REQUESTER,
    MUTE_GROUP_MEMBER_OF_NONEXISTENT_GROUP,
    MUTE_NONEXISTENT_GROUP_MEMBER,
    NOT_GROUP_MEMBER_TO_QUERY_GROUP_MEMBER_INFO,
    USER_JOIN_GROUP_WITHOUT_ACCEPTING_GROUP_INVITATION,
    USER_JOIN_GROUP_WITHOUT_ANSWERING_GROUP_QUESTION,
    USER_JOIN_GROUP_WITHOUT_SENDING_GROUP_JOIN_REQUEST,

    // Group - Blocklist
    NOT_GROUP_OWNER_OR_MANAGER_TO_ADD_BLOCKED_USER = 3500,
    NOT_GROUP_OWNER_OR_MANAGER_TO_REMOVE_BLOCKED_USER,

    // Group - Join Request
    BLOCKED_USER_SEND_GROUP_JOIN_REQUEST = 3600,
    GROUP_MEMBER_SEND_GROUP_JOIN_REQUEST,
    NOT_SENDER_TO_RECALL_GROUP_JOIN_REQUEST,
    NOT_GROUP_OWNER_OR_MANAGER_TO_QUERY_GROUP_JOIN_REQUEST,
    RECALL_NON_PENDING_GROUP_JOIN_REQUEST,
    SEND_GROUP_JOIN_REQUEST_TO_INACTIVE_GROUP,
    SEND_GROUP_JOIN_REQUEST_TO_GROUP_USING_MEMBERSHIP_REQUEST,
    SEND_GROUP_JOIN_REQUEST_TO_GROUP_USING_INVITATION,
    SEND_GROUP_JOIN_REQUEST_TO_GROUP_USING_QUESTION,
    RECALLING_GROUP_JOIN_REQUEST_IS_DISABLED,
    UPDATE_NON_PENDING_GROUP_JOIN_REQUEST,
    NOT_GROUP_OWNER_OR_MANAGER_TO_UPDATE_GROUP_JOIN_REQUEST,

    // Group - Invitation
    SEND_GROUP_INVITATION_TO_GROUP_MEMBER = 3700,
    SEND_GROUP_INVITATION_TO_BLOCKED_USER,
    SEND_GROUP_INVITATION_TO_GROUP_NOT_REQUIRING_USERS_APPROVAL,
    NOT_GROUP_OWNER_TO_SEND_GROUP_INVITATION,
    NOT_GROUP_OWNER_OR_MANAGER_TO_SEND_GROUP_INVITATION,
    NOT_GROUP_MEMBER_TO_SEND_GROUP_INVITATION,
    RECALLING_GROUP_INVITATION_IS_DISABLED,
    NOT_GROUP_OWNER_OR_MANAGER_TO_RECALL_GROUP_INVITATION,
    NOT_GROUP_OWNER_OR_MANAGER_OR_SENDER_TO_RECALL_GROUP_INVITATION,
    RECALL_NON_PENDING_GROUP_INVITATION,
    UPDATE_NON_PENDING_GROUP_INVITATION,
    NOT_INVITEE_TO_UPDATE_GROUP_INVITATION,
    NOT_GROUP_OWNER_OR_MANAGER_TO_QUERY_GROUP_INVITATION,

    // Conversation

    // Conversation - Read Date
    UPDATING_READ_DATE_IS_DISABLED = 4000,
    UPDATING_READ_DATE_IS_DISABLED_BY_GROUP,
    UPDATING_READ_DATE_OF_NONEXISTENT_GROUP_CONVERSATION,
    NOT_GROUP_MEMBER_TO_UPDATE_READ_DATE_OF_GROUP_CONVERSATION,
    MOVING_READ_DATE_FORWARD_IS_DISABLED,

    // Conversation - Typing Status
    UPDATING_TYPING_STATUS_IS_DISABLED = 4100,
    NOT_GROUP_MEMBER_TO_SEND_TYPING_STATUS,
    NOT_FRIEND_TO_SEND_TYPING_STATUS,

    // Conversation - Setting
    NOT_RELATED_USER_TO_UPDATE_PRIVATE_CONVERSATION_SETTING = 4200,
    NOT_GROUP_MEMBER_TO_UPDATE_GROUP_CONVERSATION_SETTING,

    // Message

    // Message - Send
    MESSAGE_RECIPIENT_NOT_ACTIVE = 5000,
    NOT_FRIEND_TO_SEND_PRIVATE_MESSAGE,
    BLOCKED_USER_SEND_PRIVATE_MESSAGE,
    BLOCKED_USER_SEND_GROUP_MESSAGE,
    SEND_MESSAGE_TO_INACTIVE_GROUP,
    SEND_MESSAGE_TO_MUTED_GROUP,
    SEND_MESSAGE_TO_NONEXISTENT_GROUP,
    SENDING_MESSAGES_TO_ONESELF_IS_DISABLED,
    MUTED_GROUP_MEMBER_SEND_MESSAGE,
    NOT_SPEAKABLE_GROUP_GUEST_TO_SEND_MESSAGE,
    MESSAGE_IS_ILLEGAL,
    NOT_MESSAGE_RECIPIENT_OR_SENDER_TO_FORWARD_MESSAGE,

    // Message - Update
    UPDATING_MESSAGE_BY_SENDER_IS_DISABLED = 5100,
    NOT_SENDER_TO_UPDATE_MESSAGE,
    UPDATE_MESSAGE_OF_NONEXISTENT_GROUP,
    UPDATING_GROUP_MESSAGE_BY_SENDER_IS_DISABLED,

    // Message - Recall
    RECALL_NONEXISTENT_MESSAGE = 5200,
    RECALLING_MESSAGE_IS_DISABLED,
    NOT_SENDER_TO_RECALL_MESSAGE,
    RECALL_MESSAGE_OF_NONEXISTENT_GROUP,
    MESSAGE_RECALL_TIMEOUT,

    // Message - Query
    NOT_GROUP_MEMBER_TO_QUERY_GROUP_MESSAGES = 5300,

    // Storage
    STORAGE_NOT_IMPLEMENTED = 6000,

    // Storage - Message attachment
    NOT_FRIEND_TO_UPLOAD_MESSAGE_ATTACHMENT_IN_PRIVATE_CONVERSATION = 6100,
    NOT_GROUP_MEMBER_TO_UPLOAD_MESSAGE_ATTACHMENT_IN_GROUP_CONVERSATION,
    NOT_UPLOADER_TO_SHARE_MESSAGE_ATTACHMENT,
    NOT_UPLOADER_OR_GROUP_MANAGER_TO_UNSHARE_MESSAGE_ATTACHMENT_IN_GROUP_CONVERSATION,
    NOT_UPLOADER_TO_UNSHARE_MESSAGE_ATTACHMENT_IN_PRIVATE_CONVERSATION,
    NOT_UPLOADER_OR_GROUP_MANAGER_TO_DELETE_MESSAGE_ATTACHMENT_IN_GROUP_CONVERSATION,
    NOT_UPLOADER_TO_DELETE_MESSAGE_ATTACHMENT_IN_PRIVATE_CONVERSATION,
    NOT_UPLOADER_OR_SHARED_WITH_USER_TO_DOWNLOAD_MESSAGE_ATTACHMENT,

    // Storage - Message attachment info
    NOT_FRIEND_TO_QUERY_MESSAGE_ATTACHMENT_INFO_IN_PRIVATE_CONVERSATION = 6130,
    NOT_GROUP_MEMBER_TO_QUERY_MESSAGE_ATTACHMENT_INFO_IN_GROUP_CONVERSATION,

    // Search
    SEARCHING_USER_IS_DISABLED = 7100,
    SEARCHING_GROUP_IS_DISABLED = 7200,

    // Conference
    CONFERENCE_NOT_IMPLEMENTED = 8000,

    // Conference - Meeting
    CREATE_MEETING_EXCEEDING_MAX_ACTIVE_MEETING_COUNT = 8100,
    NOT_CREATOR_TO_CANCEL_MEETING,
    CANCELING_MEETING_IS_DISABLED,
    CANCEL_NONEXISTENT_MEETING,
    NOT_CREATOR_TO_UPDATE_MEETING_PASSWORD,
    UPDATE_INFO_OF_NONEXISTENT_MEETING,

    ACCEPT_MEETING_INVITATION_WITH_WRONG_PASSWORD = 8200,
    ACCEPT_MEETING_INVITATION_OF_CANCELED_MEETING,
    ACCEPT_MEETING_INVITATION_OF_ENDED_MEETING,
    ACCEPT_MEETING_INVITATION_OF_EXPIRED_MEETING,
    ACCEPT_MEETING_INVITATION_OF_PENDING_MEETING,
    ACCEPT_NONEXISTENT_MEETING_INVITATION,
}

class ResponseStatusCode {

    static isSuccessCode(code: number | string | Code): boolean {
        if (typeof code === 'string') {
            code = parseInt(code);
        }
        return 1000 <= code && code < 1100;
    }

    static isErrorCode(code: number | string): boolean {
        return !this.isSuccessCode(code);
    }

}

export default Object.assign(ResponseStatusCode, Code);