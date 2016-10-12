//
//  KDWLogger.h
//  UntilCustum
//
//  Created by 董维 on 16/9/20.
//  Copyright © 2016年 com.myConpany.cn. All rights reserved.
//
// MARK：KDWLog(@"test",@"%@",@"yeah");

#import <Foundation/Foundation.h>

#ifdef DEBUG
#   define KDWLog(...) _KDWLog(__VA_ARGS__) 
#   define KDWClassLog(...) _KDWLog(NSStringFromClass([self class]), __VA_ARGS__)
#else
#   define KDWLog(...) do{}while(0)
#   define KDWClassLog(...) do{}while(0)
#endif

typedef void(^KDWDebuggerCustomActionBlock)(NSString *message);

void _KDWLog(NSString *module, NSString *format, ...);

void KDWDebuggerSetLogCustomActionBlock(KDWDebuggerCustomActionBlock block);

void KDWDebuggerSetLogPath(NSString *path);
void KDWDebuggerInstallUncaughtExceptionHandler(void);

void KDWDebuggerPrintCallStack(void);
