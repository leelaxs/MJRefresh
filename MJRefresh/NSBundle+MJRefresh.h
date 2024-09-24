//
//  NSBundle+MJRefresh.h
//  MJRefresh
//
//  Created by MJ Lee on 16/6/13.
//  Copyright © 2016年 小码哥. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSBundle (MJRefresh)
+ (instancetype)gu_refreshBundle;
+ (UIImage *)gu_arrowImage;
+ (UIImage *)gu_trailArrowImage;
+ (NSString *)gu_localizedStringForKey:(NSString *)key value:(nullable NSString *)value;
+ (NSString *)gu_localizedStringForKey:(NSString *)key;
@end

NS_ASSUME_NONNULL_END
