//
//  DWPublicDefines.h
//  UntilCustum
//
//  Created by 董维 on 16/9/20.
//  Copyright © 2016年 com.myConpany.cn. All rights reserved.
//

#ifndef PublicDefines_h
#define PublicDefines_h

// strong/weak transform macro; learn from Reactive cocoa.

//弱引用
#ifndef weakify_self
#if __has_feature(objc_arc)
#define weakify_self autoreleasepool{} __weak __typeof__(self) weakSelf = self;
#else
#define weakify_self autoreleasepool{} __block __typeof__(self) blockSelf = self;
#endif
#endif

//强引用
#ifndef strongify_self
#if __has_feature(objc_arc)
#define strongify_self try{} @finally{} __typeof__(weakSelf) self = weakSelf;
#else
#define strongify_self try{} @finally{} __typeof__(blockSelf) self = blockSelf;
#endif
#endif


#endif /* PublicDefines_h */
