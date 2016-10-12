//
//  NSObject+KDWPerformBlockAfterDelay.h
//  UntilCustum
//
//  Created by 董维 on 16/9/20.
//  Copyright © 2016年 com.myConpany.cn. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (KDWPerformBlockAfterDelay)

/**
 延时执行 block

 @param block 回调执行函数
 @param delay 延时时长
 */
- (void)performBlock:(void (^)(void))block
          afterDelay:(NSTimeInterval)delay;

@end
