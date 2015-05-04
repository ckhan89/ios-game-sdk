## Integrate GoogleSDK with AppotaSDK

### Setup GoogleSDK
### Config GOOGLE_CLIENT_ID and GOOGLE_CLIENT_SECRET in .plist
- Get *GOOGLE_CLIENT_ID* from [https://console.developers.google.com/project](console.developers.google.com/project) (contact Appota Game team to create or create your own google app). If you create the app on your own, please follow instruction from https://developers.google.com/+/mobile/ios/getting-started
- Create a key called *GOOGLE_CLIENT_ID* with a string value in your PLIST, and add the google app ID there.
- Create a key called *GOOGLE_CLIENT_SECRET* with a string value in your PLIST, and add the google client scret there. 
The finished .plist should look something like this:
 ![](docs/google_config.png)