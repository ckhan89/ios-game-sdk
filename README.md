Setup
------------------

AppotaGameSDK - Version 0.1

Connect with Appota user and payment system

1. Requirement:

	*	XCode 4.6 and above

	*	iOS 5.0 and above

2. Setup

	*	Required framework: 
		* AppotaSDK
		* CoreText
		* StoreKit
		* AudioToolBox
		* MobileCoreServices
		* AVFoudation
		* CoreVideo
		* MessageUI
		* Security
		* SystemConfiguration
		* CFNetwork
		* OpenGLES
		* CoreMedia
		* libxml2.dylib
		* libsqlite3.dylib
	* 	Required bundle:
		* AppotaBundle.bundle (Add bundle to project)
	* Project setting:
		* Other linker flag : -lc++ -ObjC -all_load
		
		
Getting started - (Reference AppotaGameTest)
----------------
1. 	import <AppotaSDK/AppotaSDK.h> where do you want to use SDK
2.	Setup SDK in Appdelegate:
	* AppDelegate.h
	
		* Add protocol AppotaGameSDKConfigureDelegate to AppDelegate
	* AppDelegate.m		
	Config AppotaGameSDK after setting up windows in Appdelegate (Reference AppotaGameTest/AppDelegate.m) by AppotaGameSDKConfigure class
		* Init payment list (AppotaPayment class represents payment item)
		* Init AppotaGameSDKConfigure with 
			* CLIENT_ID - Config con dev.appota.com if app is not in published state please use SANDBOX_CLIENT_ID instead
			* CLIENT_SECRET - Config con dev.appota.com if app is not in published state please use SANDBOX_CLIENT_SECRET instead
			* INAPP_API_KEY - Config con dev.appota.com if app is not in published state please use SANDBOX_INAPP_API_KEY instead
			* noticeUrl - URL for payment notification
			* checkUpdate option - Enable this option for automatic update by AppotaGameSDK
			* show payment button optition:
				- YES: Enable this option for automatic show a payment button floating on game screen
				- NO: Don't show the floating payment button (Payment view can be shown via function [AppotaGameSDKConfigre showPaymentView])
				
		* Sample:
		
		~~~~
	    [AppotaGameSDKConfigure configureWithClientID:CLIENT_ID
                                 withClientSecret:CLIENT_SECRET
                                  withInAppAPIKey:INAPP_API_KEY
                         withNoticeUrl:@"http://filestore9.com/test.php"
                                  withCheckUpdate:YES
                              enableFacebookLogin:YES
                                enableGoogleLogin:YES
                               enableTwitterLogin:YES
                            autoShowPaymentButton:YES
	     ];
		
		~~~~
		
		* Set delegate for AppotaGameSDKConfigure (shoul use AppDelegate for delegate)
		* Handle login status by protocol function - (void) didFinishLogin:(NSDictionary *)userInfoDict (UserInfo dict can be used for verification process)
			
		
