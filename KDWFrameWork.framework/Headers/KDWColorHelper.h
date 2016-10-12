//
//  KDWColorHelper.h
//  UntilCustum
//
//  Created by 董维 on 16/9/20.
//  Copyright © 2016年 com.myConpany.cn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (ColorCode)

- (NSUInteger)colorCode;

/**
 16进制转换为uicolor类型

 @param hex 16进制数值

 @return UIColor
 */
+ (UIColor *)colorWithCode:(NSUInteger)hex;

@end

@interface UIImage (KDWColorHelper)

/**
 将颜色转换为图片

 @param maskColor 色值

 @return image
 */
- (UIImage *)maskImageWithColor:(UIColor *)maskColor;

+ (UIImage *)imageWithColor:(UIColor *)color;

/**
 将颜色转换为图片

 @param color 色值
 @param size  图片大小
 
 @return image
 */
+ (UIImage *)imageWithColor:(UIColor *)color andSize:(CGSize)size;

@end
