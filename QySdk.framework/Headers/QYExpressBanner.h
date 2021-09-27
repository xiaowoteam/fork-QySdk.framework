//
//  QYExpressBanner.h
//  Cupid
//
//  Created by Peiran Zhang on 2020/5/7.
//  Copyright © 2020 iqiyi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QYExpressBase.h"
#import "QYBannerView.h"

NS_ASSUME_NONNULL_BEGIN

@protocol QYExpressBannerDelegate <NSObject>
- (void) onExpressBannerReady:(QYBannerView *)banner;
- (void) onExpressBannerFailed:(QYBannerView * __nullable)banner;
- (void) onExpressBannerClicked:(QYBannerView *)banner;
- (void) onExpressBannerNagtived:(QYBannerView *)banner extraInfo:(NSDictionary *)extra;
@end

@interface QYExpressBanner : QYExpressBase
@property(nonatomic, assign) QYBannerStyle style; 
@property(nonatomic, weak) id<QYExpressBannerDelegate> bannerDelegate;
- (instancetype) initWithSlotId:(NSString *)slotId rootViewController:(UIViewController *)controller;
- (void) setFrame:(CGRect)frame;
@end

NS_ASSUME_NONNULL_END
