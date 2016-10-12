//
//  NSDictionary+KDWHelper.h
//  UntilCustum
//
//  Created by 董维 on 16/9/20.
//  Copyright © 2016年 com.myConpany.cn. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (KDWHelper)

/**
 将数组转换为字典

 @param keys 数组数据

 @return 格式化后的字典
 */
- (NSDictionary *)dictionaryWithSomeObjectByKeys:(NSArray *)keys;

@end

@interface NSMutableDictionary (KDWHelper)

/**
 添加数据，为空后设为空

 @param aObject 对象
 @param aKey    键
 */
- (void)ksetObject:(id)aObject forKey:(id<NSCopying>)aKey;

@end
