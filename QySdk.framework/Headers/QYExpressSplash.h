//
//  QYExpressSplash.h
//  Cupid_DEMO
//
//  Created by Peiran Zhang on 2020/5/14.
//  Copyright © 2020 iqiyi. All rights reserved.
//

#import "QYExpressBase.h"

NS_ASSUME_NONNULL_BEGIN

@interface QYExpressSplash : QYExpressBase
@property(nonatomic, strong) UIImage *logo;
@property(nonatomic, strong) UIImage *topLogo;
- (instancetype) initWithSlotId:(NSString *)slotId;
- (void) presentFromController:(UIViewController *)controller completion:(void (^ __nullable)(void))completion;
- (void) dismiss;
@end

NS_ASSUME_NONNULL_END
