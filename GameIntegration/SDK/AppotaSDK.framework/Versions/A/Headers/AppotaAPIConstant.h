//
//  AppotaAPIConstant.h
//  AppotaSDK
//
//  Created by Appota on 1/22/13.
//  Copyright (c) 2013 Appota. All rights reserved.
//

#ifndef AppotaSDK_AppotaAPIConstant_h
#define AppotaSDK_AppotaAPIConstant_h

//#define NOUI_LOGIN

#define APPOTA_SCHEMA @"appota"
#define APPOTA_DRAGVIEW_TAG 1428
#define APPOTA_DIALOG_TAG 1429
#define APPOTA_DIALOG_PAYMENT_TAG 1430
#define APPOTA_WINSIZE_HEIGHT [AppotaUtil getWindowSize].height

#define APPOTA_OAUTH_REQUEST_TOKEN_URL @"https://id.appota.com/oauth/request_token"
#define APPOTA_FACEBOOK_OAUTH_REQUEST_TOKEN_URL @"https://id.appota.com/social/facebook_oauth?callback="

#define APPOTA_APP_REQUEST_TOKEN_URL @"https://id.appota.com/app/request_token"
#define APPOTA_OAUTH_ACCESS_TOKEN_URL @"https://id.appota.com/oauth/access_token"
#define APPOTA_APP_ACCESS_TOKEN_URL @"https://id.appota.com/app/access_token"
#define APPOTA_APP_REFRESH_TOKEN_URL @"https://id.appota.com/oauth/refresh_token"
#define APPOTA_LOGIN_DICT_KEY_SAVED @"key_appota_login_dict_saved"
#define APPOTA_USER_DEVICE_KEY @"gamota_samedevice_user"
#define APPOTA_COUNTRY_LOCATION_KEY @"appota_country_location_key"
#define APPOTA_API_CONFIG_KEY @"appota_api_config_key"
#define APPOTA_NORMAL_LOGIN_USERNAME_KEY @"appota_normal_login_username_key"
#define APPOTA_GAME_DEVICE_TOKEN_KEY @"appota_game_push_device_token"

#define PAYMENT_TOPUP_BANK @"https://api.appota.com/payment/topup_bank?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"
#define PAYMENT_TOPUP_PAYPAL @"https://api.appota.com/payment/topup_paypal?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"
#define PAYMENT_TOPUP_SMS @"https://api.appota.com/payment/topup_sms?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"
#define PAYMENT_TOPUP_CARD @"https://api.appota.com/payment/topup_card?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"
#define PAYMENT_TOPUP @"https://api.appota.com/payment/topup?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"

#define PAYMENT_INAPP_BANK @"https://api.appota.com/payment/inapp_bank?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"
#define PAYMENT_INAPP_PAYPAL @"https://api.appota.com/payment/inapp_paypal?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"
#define PAYMENT_INAPP_SMS @"https://api.appota.com/payment/inapp_sms?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"
#define PAYMENT_INAPP_CARD @"https://api.appota.com/payment/inapp_card?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"
#define PAYMENT_INAPP @"https://api.appota.com/payment/inapp?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"
#define PAYMENT_DETAIL @"https://pay.appota.com/payment/detail?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"
#define PAYMENT_CONFIRM @"https://api.appota.com/payment/confirm?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"
#define PAYMENT_RESEND @"https://api.appota.com/paypal/resend_mail?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"

#define CHECK_UPDATE_URL @"https://api.appota.com/client/check_version?api_key=<ACCESS_TOKEN>"

#define USER_BASIC_INFO @"https://api.appota.com/user/info?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"
#define USER_FACEBOOK_LOGIN @"https://api.appota.com/user/facebook_login?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"

#define AVAIABLE_STORE_URL @"http://api.appota.com/client/checkavaionstore"

#define APPOTA_SDK_VERSION @"1.0"
#define APPOTA_SDK_BUILD 18

#define ITEM_INAPP_LIST @"https://api.appota.com/item/get_list?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"
#define ITEM_INAPP_CHECKBOUGHT_LIST @"https://api.appota.com/item/bought?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"
#define ITEM_INAPP_ISBOUGHT @"https://api.appota.com/item/is_bought?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"
#define ITEM_INAPP_BUY @"https://api.appota.com/item/buy?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"

#define TOP_UP_TYM_WEB @"https://pay.appota.com/payment?access_token="
#define TOP_UP_LIST_ITEMS_WEB @"https://pay.appota.com/items?action=listitem&access_token="
#define TOP_UP_BUY_ITEMS_WEB @"https://pay.appota.com/items?action=buyitem&access_token="

#define QUICK_LOGIN_URL @"https://api.appota.com/game/quickLogin?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"
#define NORMAL_LOGIN_URL @"https://api.appota.com/game/login?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"
#define FB_LOGIN_URL @"https://api.appota.com/game/login_facebook?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"
#define GOOGLE_LOGIN_URL @"https://api.appota.com/game/login_google?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"
//#define TWITTER_LOGIN_URL @"https://api.appota.com/game/login_google?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"
#define REG_ACCOUNT_URL @"https://api.appota.com/game/register?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"
#define UPDATE_ACOUNT_URL @"https://api.appota.com/game/update_profile?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"
#define LOGOUT_URL @"https://api.appota.com/user/logout?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"
#define TWITTER_LOGIN_URL @"https://api.appota.com/game/login_twitter?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"

#define CHECK_DEVICE_ID_URL @"https://api.appota.com/game/checkDeviceId?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"
#define REMOVE_ACCOUNT_URL @"https://api.appota.com/game/removeDevice?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"
#define INIT_SDK_TRACK_URL @"http://api.appota.com/client/track"
#define TRANSACTION_LOG_URL @"https://api.appota.com/game/getTransactionList?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"
#define USER_INFO_URL @"https://api.appota.com/game/get_user_info?access_token=<ACCESS_TOKEN>&lang=<LANG_SETTING>"


#define GAPOTA_TRACKING_URL @"http://www.google-analytics.com/collect"

#define DEFAULT_GG_CLIENT_ID @"242204253141.apps.googleusercontent.com"

#define IS_IOS6_AND_UP ([[UIDevice currentDevice].systemVersion floatValue] >= 6.0)

#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

#define DEBUG_MODE NO
#endif
