//
//  NSObject+KDWKVO.h
//  UntilCustum
//
//  Created by 董维 on 16/9/20.
//  Copyright © 2016年 com.myConpany.cn. All rights reserved.
//
//  监听的是值的变化，其值确实改变后才会触发回调；

#import <Foundation/Foundation.h>

@interface NSObject (KDWKVO)

- (void)addKDWKVOForPath:(NSString*)path withBlock:(void (^)(id newValue))block;

- (void)removeKDWKVOForPath:(NSString *)path;

- (void)removeKDWAllKVOs;

@end
