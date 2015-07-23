ChangeLog
=====

## 1. SDK
Appota Game SDK version 4.0.7b7. Update:
+ fixed crash on iOS 6
+ fixed payment via techcombank web view show empty page.
### . ChangelogID:

CLUpdate01: 
  + fixed: showPaymentViewWithPackageID:(NSString *)packageID method. show all payment with invalid packageID.


## 2. Server

- Add `revenue` parameter in IPN callback to measure revenue of current payment method type `CARD`, `BANK`, ...
- Reimplement your hash checking function to add `revenue` parameter (it will be add in `a-z` order)
- For detail please read wiki about IPN for each payment method [https://github.com/appota/ios-game-sdk/wiki/Passive-Confirmation-via-IPN](https://github.com/appota/ios-game-sdk/wiki/Passive-Confirmation-via-IPN)
