**Get Started**

Appota Game SDK cho iOS là cách đơn giản nhất để tích hợp user và thanh toán cho ứng dụng của bạn trên hệ thống Appota. SDK này cung cấp giải pháp cho các hình thức thanh toán: SMS, thẻ cào, internet banking, Paypal và Apple Payment.

**Các bước tích hợp SDK:**

​1. Cài đặt Appota SDK

​2. Cấu hình SDK

​3. Tích hợp

​4. Hiểu về Appota SDK flow

 

**1. Cài đặt Appota SDK**

**Import Appota.framework vào project**

Kéo và thả AppotaSDK.framework and AppotaBundle.bundle vào project của bạn.

Tick vào checkbox: “Copy items into destination group's folder (if needed)”.
 
Trong phần Project app’s target settings, tìm [Build phases] và mở [Link Binary with Libraries]. Click dấu ‘+’ và thêm các frameworks sau:

```
    AppotaSDK, QuaztCore, CoreText, StoreKit, AudioToolBox, MobileCoreServices, AVFoudation, CoreVideo,
    MessageUI, Security, SystemConfiguration, CFNetwork, OpenGLES, CoreMedia, libxml2.dylib, libsqlite3.dylib
```

![](step1.jpg)

Trong phần [project build settings], tìm [Other Linker Flags], thêm 2 giá trị sau: -ObjC, -lc++ và -all\_load.

![](step2.jpg)

Import file header vào file code nơi bạn muốn sử dụng SDK:

``` c
    #import <AppotaSDK/AppotaSDK.h>
```

**Config plist với CLIENT\_KEY**\
 
Thêm 1 trường AppotaClientId với giá trị là CLIENT\_ID. Add thêm schema: Thêm 1 trường URL types kiểu Array. Tạo thêm 1 item với URL Schemes là appotaCLIENT\_ID.
 
Ví dụ nếu CLIENT\_ID = b804d6421df6ae7dbcd51469e4d8ee0005101f540 thì schemes sẽ là appotab804d6421df6ae7dbcd51469e4d8ee0005101f540.

![](step3.jpg)

**2. Cấu hình SDK**

**Cấu hình SDK trong Appdelegate:**

**+AppDelegate.h**

Thêm giao thức AppotaGameSDKConfigureDelegate vào AppDelegate.

**+AppDelegate.m**

Sử dụng class AppotaGameSDKConfigure để cấu hình SDK.

- Khởi tạo danh sách thanh toán (mô tả item thanh toán trong class AppotaPayment).

- Khởi tạo AppotaGameSDKConfigure với 
     CLIENT\_ID: Cấu hình trên dev.appota.com (dùng SANDBOX\_CLIENT\_ID trong chế độ sandbox).\
     CLIENT\_SECRET: Cấu hình trên dev.appota.com \
     INAPP\_API\_KEY: Cấu hình trên dev.appota.com (dùng SANDBOX\_INAPP\_API\_KEY trong chế độ sandbox).\
     noticeUrl: URL gọi lúc giao dịch hoàn thành.\
     configUrl: URL tới file cấu hình JSON.

``` c
    [AppotaGameSDKConfigure configureWithClientID:CLIENT_ID
        withClientSecret:CLIENT_SECRET
        withInAppAPIKey:INAPP_API_KEY
        withState:@"YOUR_PAYMENT_STATE" 
        withNoticeUrl:@"http://filestore9.com/test.php"
        withConfigUrl:@"http://filestore9.com/config.json" 
    ];
```

Để tích hợp cho phép đăng nhập bằng tài khoản Facebook, Google, Twitter vui lòng theo các chỉ dẫn của từng SDK. Đối với FBSDK cấu hình info.plist và FacebookAppId, đối với Google SDK cấu hình googleClientId (tham khảo AppotaGameTest).

- Đặt delegate cho AppotaGameSDKConfigure (nên sử dụng Appdelegate cho delegate).

``` c
    [AppotaGameSDKConfigure sharedGameConfig].delegate = self;
```

- Handle trạng thái đăng nhập bằng hàm callback - *(void) didFinishLogin:(NSDictionary \*)userInfoDict* (UserInfo dict có thể được sử dụng cho quá trình xác nhận).

- Handle trạng thái logout bằng hàm callback - *(void) didLogOut:(NSString\*) userName*

- Handle trạng thái giao dịch bằng hàm callback - *(void) didFinishPaymentWithDictionary:(NSDictionary\*)paymentDict
withState:(AppotaPaymentState)status withError:(NSError\*) error*

- Nếu bạn sử dụng thêm dòng handle mở URL trong AppDelegate của bạn:

``` c
(BOOL) application:(UIApplication \*)application openURL:(NSURL \*)url sourceApplication:(NSString \*)sourceApplication annotation:(id)annotation {\
    return [AppotaGameSDKConfigure handleOpenURL:url sourceApplication:sourceApplication annotation:annotation];\
 }
```

**Cấu hình JSON:**

Appota Game SDK cung cấp một phương thức cấu hình tiện lợi với nhiều tùy
chọn cho nhà phát triển. Bạn cần thực hiện các bước sau để sử dụng
phương thức này:

- Sử dụng công cụ JSON Generator để tạo ra file JSON chứa các cấu hình
([https://developer.appota.com/sdktool.php](https://developer.appota.com/sdktool.php)).
 - Upload file cấu hình JSON lên một host có thể truy cập được.\
 - Thiết đặt \*[AppotaGameSDKConfigure sharedGameConfig].jsonConfigUrl với đường dẫn tới file JSON.

 

**3. Integrate SDK**

Tất cả các hàm thực thi SDK có thể được truy cập qua class AppotaGameSDKConfigure. Các hàm hỗ trợ:

 +showSDKView: Hiển thị giao diện SDK.
 +logOut: Hiển thị giao diện logout.
 +(NSDictionary): getUserInfo\* Lấy thông tin user (acces\_token,username, email…) trong NSDictionary
 +(NSString): getUserName: Lấy username
 +(NSString): getUserId: Lấy userid
 +(NSString): getAccessToken: Lấy access token
 +showPaymentView: Hiển thị giao diện thanh toán
 +showLoginView: Hiển thị giao diện login
 +showSwitchUserView: Hiển thị giao diện chuyển user
 +showPaymentButton, hidePaymentButton: Hiện/ẩn nút bấm Appota SDK mặc định
 +sharedGameConfig: Singleton shared instance của AppotaGameSDKConfigure

 

**4. Appota SDK Flow**


