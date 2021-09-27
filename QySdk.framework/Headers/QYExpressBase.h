//
//  QYExpressBase.h
//  Cupid_DEMO
//
//  Created by Peiran Zhang on 2020/5/15.
//  Copyright © 2020 iqiyi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class QYWrapperHolder;
@class QYCupidWrapper;
@class QYCupidSlot;
@class QYCupid;
@class QYNetProtocol;

typedef NS_ENUM(NSInteger, QY_JUMP_STYLE) {
    QY_JUMP_STYLE_NORMAL        = 0, // 普通跳转
    QY_JUMP_STYLE_SECOND_PAGE   = 1  // 跳转二级页
};

@class QYExpressBase;

@protocol QYExpressDelegate <NSObject>
@optional
- (void) onExpressLoadFailed;
- (void) onExpressLoadSuccess:(QYExpressBase *)express;
- (void) onExpressPlayStart;
- (void) onExpressPlayEnd;
- (void) onExpressPlayError;
- (void) onExpressClosed;
- (void) onExpressClicked:(id __nullable)obj;
@end

@interface QYExpressBase : NSObject
@property(nonatomic, weak) UIViewController *rootController;
@property(nonatomic, copy) NSString *bundleId;      //identifier of unique ad obj
@property(nonatomic, copy) NSString *slotId;        //ali slot id
@property(nonatomic, copy) NSString *wrapperId;     //identifier of unique resp, as m-key
@property(nonatomic, copy) NSString *videoId;       //video id defined by media
@property(nonatomic, copy) NSString *videoEventId;  //video event id defined by i
@property(nonatomic, copy) NSString *sessionId;

@property(nonatomic, assign) NSInteger iSlotType;    //ali slot type
@property(nonatomic, assign) NSInteger requestCount; //how many ads to req
@property(nonatomic, assign) NSInteger reqDuration;  //time req spend
@property(nonatomic, assign) NSInteger reqTimeOut;  //how long to req
@property(nonatomic, assign) NSInteger retryTimes;  //how many times to req
@property(nonatomic, assign) BOOL isAdReady;

@property(nonatomic, strong) NSMutableSet *realRidRecord;

@property(nonatomic, weak) id<QYExpressDelegate> delegate;

- (void) loadData;
- (void) loadDataRealTime:(BOOL)realtime;
- (void) dealWithClickEvent:(QYCupid *)ad prop:(NSDictionary *)prop jumpStyle:(QY_JUMP_STYLE)jStyle extend:(NSDictionary * __nullable)ext;
- (void) dealWithNoCupidParsed:(QYCupidSlot *)slot;
- (void) cacheStoreController:(QYCupid *)cupid;
- (nullable QYCupidWrapper *)processMixerResponse:(nonnull NSString *)url andRid:(nonnull NSString *)rid resp:(nonnull NSData *)response;
- (void) schemePull:(NSString *)scheme callback:(nullable void(^)(BOOL result))callback;
#pragma mark 回调
- (void) callbackReady;
- (void) callbackFailed;
- (void) callbackEnd;
- (void) callbackClosed;
- (void) callbackClicked:(id __nullable)obj;

#pragma mark QYCupidBuilderDelegate
- (void) onCupidSuccess:(NSString *)wrapperId;
- (void) onCupidFailed;

#pragma mark QYClickHandlerDelegate
- (void) onPageOpenFailed;
- (void) onPageOpenSuccess;
- (void) onPageClosed;

#pragma mark fore&back ground
- (void) doEnterForeground;
- (void) doEnterBackground;
@end

NS_ASSUME_NONNULL_END
