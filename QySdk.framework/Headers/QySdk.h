//
//  QySdk.h
//  Cupid
//
//  Created by Peiran Zhang on 2020/3/17.
//  Copyright © 2020 iqiyi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <QySdk/QYBannerView.h>
#import <QySdk/QYExpressRoll.h>
#import <QySdk/QYExpressBanner.h>
#import <QySdk/QYExpressReward.h>
#import <QySdk/QYExpressSplash.h>

#define QY_LOG_NONE      0
#define QY_LOG_ERROR     1
#define QY_LOG_DEBUG     2

extern NSString *EXTRA_KEY_COVER_URL;
extern NSString *STATUS_KEY_DEVICE_PRINT;
extern NSString *STATUS_KEY_MOBILE_KEY;
extern NSString *STATUS_KEY_IQID;

@interface IAdSdk : NSObject

+ (void) setAppId:(NSString *)appId;
+ (void) setDebugLevel:(NSInteger)lvl;
+ (void) setLogPath:(NSString *)path;
+ (void) setGender:(NSString *)gender;
+ (void) setAge:(NSInteger)age;
+ (void) setKeyWords:(NSArray *)words;
+ (void) setExtInfo:(NSDictionary *)info;
+ (void) setSplashForeRequest:(BOOL)b;
+ (void) setTestMode:(BOOL)test;
+ (void) start;
+ (void) setChannelId:(NSString *)channelId;
+ (void) clearCache;
+ (void) setAppOrientation:(UIInterfaceOrientation)orientation;
+ (void) setUaaUserId:(NSString *)uaaUserId;
+ (void) initService;
+ (void) setSdkStatus:(NSDictionary *)status;
+ (void) setAudioMix:(BOOL)mix;
+ (void) setItunesAppleId:(NSString *)appleId;
+ (NSString *) sdkVersion;
@end

