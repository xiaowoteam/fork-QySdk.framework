//
//  QYExpressReward.h
//  QySdk
//
//  Created by Peiran Zhang on 2021/1/8.
//  Copyright © 2021 iqiyi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QYExpressBase.h"

NS_ASSUME_NONNULL_BEGIN

@interface QYExpressReward : QYExpressBase

- (instancetype) initWithSlotId:(NSString *)slotId;
- (void) presentFromController:(UIViewController *)controller;
- (void) setMute:(BOOL)mute;
@end

NS_ASSUME_NONNULL_END
