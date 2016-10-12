//
//  DWRandom.h
//  UntilCustum
//
//  Created by 董维 on 16/9/20.
//  Copyright © 2016年 com.myConpany.cn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 随机日期-最近一个月随机

 @return  随机数
 */
NSString *randomDateString();

/**
 随机日期---- 几个月内随机

 @param count 月的个数

 @return 随机时间
 */
NSString *randomDateStringWithinCount(NSInteger count);

/**
 随机汉字--100 以内

 @return 随机汉字
 */
NSString *randomChinas();

/**
 随机汉字--count 以内

 @param count 汉字个数

 @return 随机汉字
 */
NSString *randomChinasWithinCount(NSInteger count);

/**
 字符串 -- 不定长

 @return 不定长的字符串
 */
NSString *randomString();

/**
 随机字母 - 26个

 @return 26个随机字母
 */
NSString *randomLetter();

/**
 随机字母

 @param count 字母个数

 @return 随机字母
 */
NSString *randomLetterWithInCount(NSInteger count);

/**
 随机颜色

 @return 随机颜色
 */
UIColor *randomColor();

/**
 当前日期时间

 @return 当前日期时间
 */
double randomNowDate();

/**
 随机倒计时日期时间 (前提是大于当前时间)

 @return 随机倒计时时间
 */
NSString *randomTimeCountdown();


