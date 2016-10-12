//
//  DWBundle.h
//  UntilCustum
//
//  Created by 董维 on 16/9/20.
//  Copyright © 2016年 com.myConpany.cn. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 bundInfoDict

 @return bundle信息
 */
NSDictionary *bundInfoDict();

/**
 应用标识
 */
NSString *bundleIdentifier();

/**
 应用名称
 */
NSString *bundleName();

/**
 应用显示名称
 */
NSString *bundleDisplayName();

/**
 应用版本号
 */
NSString *bundleVersion();

/**
读取文件内容，返回对象。支持plist和json，通过文件名后缀判断文件类型
 @param fileName 文件名称
 */
id objectFromFile(NSString *fileName);
