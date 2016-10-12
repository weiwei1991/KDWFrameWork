//
//  KDWJSONHelper.h
//  UntilCustum
//
//  Created by 董维 on 16/9/20.
//  Copyright © 2016年 com.myConpany.cn. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (KDWJSONHelper)
- (id)JSONObject;
@end

@interface NSDictionary (KDWJSONHelper)
- (NSData *)JSONData;
- (NSString *)JSONString;
@end

@interface NSArray (KDWJSONHelper)
- (NSData *)JSONData;
- (NSString *)JSONString;
@end
