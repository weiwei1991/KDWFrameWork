//
//  KDWUtilities.h
//  UntilCustum
//
//  Created by 董维 on 16/9/20.
//  Copyright © 2016年 com.myConpany.cn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define KDWAssertRequireMainThread() NSAssert([NSThread isMainThread], @"This method can only be invoked on main thread!");

#define KDWUtilRemoveNotificationCenterObserverDealloc - (void)dealloc{ [[NSNotificationCenter defaultCenter] removeObserver:self]; }

/**
 判断对象是否为空

 @param object 实例对象

 @return YES/NO
 */
static inline BOOL KDWUtilIsObjectNull(id object);
static inline BOOL KDWUtilIsObjectNull(id object) {
    return object == nil || object == [NSNull null];
}

/**
 判断NSString是否为空

 @param str 字符串

 @return YES/NO
 */
static inline BOOL KDWUtilIsStringValid(NSString *str);
static inline BOOL KDWUtilIsStringValid(NSString *str) {
    return str != nil && (id)str != [NSNull null] && ![str isEqualToString:@""];
}

/**
 
判断当前版本的版本号高低
 @param version 版本号

 @return YES/NO
 */
extern BOOL KDWUtilIsOSVersionHigherOrEqual(NSString* version);
extern BOOL KDWUtilIsOSMajorVersionHigherOrEqual(int version);

static inline BOOL KDWUtilIs4InchScreen();
static inline BOOL KDWUtilIs4InchScreen() {
    return [UIScreen mainScreen].bounds.size.height == 568.0;
}

extern UIView *KDWUtilFindViewInSuperViews(UIView *view, Class viewClass);
