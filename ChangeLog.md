ChangeLog
=====

## 1. SDK
Appota Game SDK version 4.0.7b7. Update:
+ fixed crash on iOS 6
+ fixed payment via techcombank web view show empty page.
### . ChangelogID:

CLUpdate01: 
  + fixed: showPaymentViewWithPackageID:(NSString *)packageID method. show all payment with invalid packageID.

CLUpdate02:
+ update sdk version label.
CLUpdate03:
+ fix crash payment bank.
CLUpdate04:
+ fixed Unauthorized user. (401 error code) 
CLUpdate05:
+ fixed error update user infor.
+ fixed crash facebook sdk ver 4.4.0
CLUpdate06: SDK Verion 4.0.9
+ fixed show error currency 
+ fixed refreshcontrol in history transaction 
CLUpdate07: SDK Version 4.0.9b3
+ fixed sdk not show when tap on sdk button
CLUpdate08: SDK Version 4.0.9b4
+ update bitcode for xcode 7
CLUpdate09: SDK Version 4.0.9b5
+ update ewallet payment method
## 2. Server

- Add `revenue` parameter in IPN callback to measure revenue of current payment method type `CARD`, `BANK`, ...
- Reimplement your hash checking function to add `revenue` parameter (it will be add in `a-z` order)
- For detail please read wiki about IPN for each payment method [https://github.com/appota/ios-game-sdk/wiki/Passive-Confirmation-via-IPN](https://github.com/appota/ios-game-sdk/wiki/Passive-Confirmation-via-IPN)
