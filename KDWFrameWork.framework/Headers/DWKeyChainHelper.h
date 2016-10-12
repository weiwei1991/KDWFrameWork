//
//  DWKeyChainHelper.h
//  UntilCustum
//
//  Created by 董维 on 16/9/20.
//  Copyright © 2016年 com.myConpany.cn. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DWKeyChainHelper : NSObject

/**
 保存Content到kechain中

 @param content        需要保存的内容
 @param contentService key值
 */
+ (void) saveContent:(NSString*)content
      contentService:(NSString*)contentService;

/**
 根据contentService 从kechain中获取内容

 @param contentService key值

 @return 返回存储的内容
 */
+ (NSString*) getContentWithService:(NSString*)contentService;

@end
