## Integrate Twitter with AppotaSDK

### Setup GoogleSDK
- In Project app’s target settings section, find [Build phases] and open
Link Binary with Libraries. Click on ‘+’ button and add these frameworks:

```
Twitter.framework
```

### Config GoogleClientID
- Get TwitterConsumerKey, TwitterConsumerSecret from [https://dev.twitter.com/](https://dev.twitter.com/) (contact Appota Game team to create or create your own twitter app). If you create the app on your own, please follow instruction from https://dev.twitter.com/
- Create 2 keys *TWITTER_CONSUMER_KEY, TWITTER_CONSUMER_SECRET* in plist [refer example for detail](GameIntegration/AppotaGameTest/)
### Add login handler in project
	```objc
	(BOOL) application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation {
    		return [AppotaGameSDKConfigure handleOpenURL:url sourceApplication:sourceApplication annotation:annotation];
	}
	```