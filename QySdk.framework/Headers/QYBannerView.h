//
//  QYBannerView.h
//  QySdk_Demo
//
//  Created by Peiran Zhang on 2020/11/30.
//  Copyright © 2020 iqiyi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, QYBannerStyle) {
    QYBANNER_FULL = 0,
    QYBANNER_TITLEIN = 1,
    QYBANNER_TITLEABOVE = 2,
    QYBANNER_TITLEBELOW = 3,
    QYBANNER_STRIP = 4
};

@class QYBannerView;

@interface QYBannerView : NSObject

- (void) layoutOnParent:(UIView *)parent;
- (void) setFrame:(CGRect)frame;
- (void) removeFromParent;
- (CGRect) getImpRect;
- (CGRect) getAbsRect;
- (BOOL) isCurrentImpressed;
- (BOOL) hasBeenImpressed;
- (NSDictionary *) getExtra;
- (void) setNagtiveHidden:(BOOL)hidden;

#pragma mark 视频控制
- (void) play;
- (void) pause;
- (void) mute:(BOOL)mute;
- (void) hideMuteButton:(BOOL)hide;
@end

NS_ASSUME_NONNULL_END
