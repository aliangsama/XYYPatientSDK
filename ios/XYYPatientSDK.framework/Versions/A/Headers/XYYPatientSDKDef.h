//
//  yaolianti.pch
//  yaolianti
//
//  Created by huangliwen on 2018/6/5.
//  Copyright © 2018年 hlw. All rights reserved.
//

// Include any system framework and library headers here that should be included in all compilation units.
// You will also need to set the Prefix Header build setting of one or more of your targets to reference this file.
#ifdef __OBJC__
#import "MBProgressHUD+Add.h"
//app名称配置
#define APP_NAME @"yaolianti-c"
//底部按钮高度
#define DEFAULT_TABBAR_HEIGHT 49

//导航栏颜色
#define NAV_BAR_COLOR HexRGB(0x252525)

//程序中默认字体
#define DEFAULT_FONT @"Helvetica"

//本地数据库名称
#define LOCAL_DB_NAME @"yaolianti"

//本地数据库保存目录（一般不删除）
#define LOCAL_FILE_PATH @"db"

// 服务器接口根地址
//#define API_HOST @"http://app.fda365.cn/xyyapphz/api/"//正式地址
//#define API_HOST @"http://192.168.1.189:8905/prescript-patient-appServer/"//测试地址
#define API_HOST @"http://patient.zdxym.com/prescript-patient-appServer/api"//SDK测试地址
//h5页面地址
#define H5_HOST  @"http://app.fda365.cn/app-Xinyiyun/"//正式地址

//版本更新相关
#define DOWNLOAD_PLIST_URL [NSString stringWithFormat:@"%@/app-Xinyiyun/ios/Xinyiyun/versions-p.plist", API_HOST]

#define IMAGE_URL(substr) [NSString stringWithFormat:@"%@/mobile_img/%@", API_HOST,substr]


//获取RGB实现
#define RGBA(r,g,b,a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)]
#define RGB(r,g,b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]
#define HexRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define HexRGBAlpha(rgbValue,a) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:(a)]

#define TINTCOLOR HexRGB(0x252525)

//主页底部颜色值
#define MAIN_BOTTOM_COLOR RGBA(255, 255, 255, 1.0)
#define BACKGOUND_COLOR RGBA(248, 248, 248, 1.0)
//顶部bar颜色值
#define NVIGATION_BACKGOUND_COLOR RGBA(255, 255, 255, 1.0)
#define DEFAULT_TITLE_COLOR RGBA(119, 119, 119, 1.0)
#define NEXT_TITLE_COLOR HexRGB(0x2cbeb0)
//灰色
#define HUISE_COLOR HexRGB(0x919191)
//黑色
#define HEISE_COLOR HexRGB(0x414141)
//线条颜色
#define LINE_COLOR HexRGB(0xf0f0f0)
//主要交互色
#define DEFAULT_JIAOHU_COLOR HexRGB(0x2cbfb0)
//渐变色
#define JIANBIAN_GREEN_START_COLOR HexRGB(0x2cbeb0)//绿色渐变开始颜色
#define JIANBIAN_GREEN_OVER_COLOR HexRGB(0x65e5d9)//绿色渐变结束颜色
#define JIANBIAN_ORANGE_START_COLOR HexRGB(0xf6ba64)//橙色渐变开始颜色
#define JIANBIAN_ORANGE_OVER_COLOR HexRGB(0xfbeeaa)//橙色渐变结束颜色
#define JIANBIAN_GRAY_START_COLOR HexRGB(0x919191)//灰色渐变开始颜色
#define JIANBIAN_GRAY_OVER_COLOR HexRGB(0xbfbdbd)//灰色渐变结束颜色

//包括状态栏的屏幕尺寸
#define SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)
#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)

//不包括状态栏的屏幕尺寸
#define FRAME_WIDTH ([UIScreen mainScreen].applicationFrame.size.width)
#define FRAME_HEIGHT ([UIScreen mainScreen].applicationFrame.size.height)

//状态栏尺寸,不包含热点时的多出尺寸
#define STATUS_BAR_WIDTH ([[UIApplication sharedApplication] statusBarFrame].size.width)
#define STATUS_BAR_HEIGHT ([[UIApplication sharedApplication] statusBarFrame].size.height)

//导航栏状态栏高度
#define TITLE_HEIGHT_WITH_BAR (STATUS_BAR_HEIGHT+44)

//自适应长、宽
#define CGRectMake375( x, y, width, height) [CGRectMakeSingle CGRectMakeCustoms:CGRectMake( x,  y, width, height)]

//判断字符串是否为空
#define IS_EMPTY(str) (str == nil || [str length] == 0)

//图片圆角数值
#define DEFAULT_YUANJIAO 5.0f

//文字默认大小
#define DEFAULT_FONT_SIZE [UIFont systemFontOfSize:15.0f]

//设置字体大小
#define FONT(a) [UIFont systemFontOfSize:a]
//默认间距
#define DEFAULT_JIANJU 12

// 弱引用
#define WS(weakSelf)  __weak __typeof(&*self)weakSelf = self;

//sessionKey
#define UID @"uid"
#define USERNAME @"userName"
#define APP_TOKEN @"app_token"
#define DOCTOR_ID @"doctor_ID"
#define MOBILE @"mobile"
#define PASSWORD @"password"
#define DEVICETOKEN @"DEVICETOKEN"
//通知列表
#define NOTICE_REFRESH_HUANZHE @"notice_refresh_huanzhe"//刷新患者首页
#define NOTICE_KAIDAN_SUCCESS @"notice_kaidan_success"//开单成功
#define NOTICE_SQQY_SUCCESS @"notice_sqqy_success"//申请取药成功
#define NOTICE_ADD_ADDRESS_SUCCESS @"notice_add_address_success"//添加收货地址成功
#define NOTICE_EDIT_ADDRESS_SUCCESS @"notice_edit_address_success"//编辑收货地址成功

//网易云IM
#define NTES_USE_CLEAR_BAR - (BOOL)useClearBar{return YES;}

#define NTES_FORBID_INTERACTIVE_POP - (BOOL)forbidInteractivePop{return YES;}

#define IOS11            ([[[UIDevice currentDevice] systemVersion] doubleValue] >= 11.0)
#define UIScreenWidth                              [UIScreen mainScreen].bounds.size.width
#define UIScreenHeight                             [UIScreen mainScreen].bounds.size.height
#define UISreenWidthScale   UIScreenWidth / 320
#define STATUS_BAR_HEIGHT ([[UIApplication sharedApplication] statusBarFrame].size.height)
//导航栏状态栏高度
#define TITLE_HEIGHT_WITH_BAR (STATUS_BAR_HEIGHT+44)

#define UICommonTableBkgColor UIColorFromRGB(0xe4e7ec)
#define Message_Font_Size   14        // 普通聊天文字大小
#define Notification_Font_Size   10   // 通知文字大小
#define Chatroom_Message_Font_Size 16 // 聊天室聊天文字大小


#define SuppressPerformSelectorLeakWarning(Stuff) \
do { \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"") \
Stuff; \
_Pragma("clang diagnostic pop") \
} while (0)


#pragma mark - UIColor宏定义
#define UIColorFromRGBA(rgbValue, alphaValue) [UIColor \
colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0x00FF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0x0000FF))/255.0 \
alpha:alphaValue]

#define UIColorFromRGB(rgbValue) UIColorFromRGBA(rgbValue, 1.0)

#define dispatch_sync_main_safe(block)\
if ([NSThread isMainThread]) {\
block();\
} else {\
dispatch_sync(dispatch_get_main_queue(), block);\
}

#define dispatch_async_main_safe(block)\
if ([NSThread isMainThread]) {\
block();\
} else {\
dispatch_async(dispatch_get_main_queue(), block);\
}

/* weakSelf strongSelf reference */
#define WEAK_SELF(weakSelf) __weak __typeof(&*self) weakSelf = self;
#define STRONG_SELF(strongSelf) __strong __typeof(&*weakSelf) strongSelf = weakSelf;
#endif /* yaolianti_pch */
