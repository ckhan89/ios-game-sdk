# Appota GameSDK for iOS upgrade
** This document's developed to support upgrading Appota SDK3 to SDK4  **
### Class update
This table below will explain class update between SDK3 and SDK4.

|SDK3|SDK4|Note|
|-------|-----------|---| 
|`AppotaGameSDKConfigure`|`AppotaGameSDK`|SDK main configuration class changed|

### Function update
This table below will explain changes in corresponding function between SDK3 and SDK4

|SDK3|SDK4|Note|
|-------|-----------|  
|configureWithClientID:withClientSecret:withInAppAPIKey:withState:withNoticeUrl:
                 withConfigUrl:|`packageID` each payment package in game should be defined along with a package ID (provided by SDKTool) to identify package.|
