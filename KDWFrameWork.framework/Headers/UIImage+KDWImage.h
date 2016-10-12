//
//  NSString+KDWImage.h
//  UntilCustum
//
//  Created by 董维 on 16/9/20.
//  Copyright © 2016年 com.myConpany.cn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (KDWImage)

/**
 拉伸图片

 @param imageName 图片名称

 @return 拉伸后的图
 */
+ (UIImage *)resizableImageWithName:(NSString *)imageName;

/**
 对相机拍摄出来的照片进行正确方向的旋转

 @param aImage 图片

 @return 旋转正确方向后的图片
 */
+ (UIImage *)fixOrientation:(UIImage *)aImage;

/**
 给图片添加水印

 @param useImage  底图
 @param maskImage 水印照片
 @param rect      水印照片的位置

 @return 合成后的图片
 */
+ (UIImage *)addImage:(UIImage *)useImage addMsakImage:(UIImage *)maskImage msakRect:(CGRect)rect;

/**
 一张照片添加到另一张照片上

 @param image1 需要添加的照片
 @param image2 底图

 @return 合成后的照片
 */
+ (UIImage *)addImage:(UIImage *)image1 toImage:(UIImage *)image2;

/**
 图片裁切指定大小

 @param image   image
 @param newSize 大小

 @return 裁切后的图片
 */
+ (UIImage*)imageWithImage:(UIImage*)image
              scaledToSize:(CGSize)newSize;

/**
 缩放图片

 @param image  image
 @param scale 缩放系数

 @return 缩放后的图
 */
+ (UIImage*)imageCompressWithSimple:(UIImage*)image scale:(float)scale;

/**
 图片转化为灰度图片

 @param sourceImage 源图片

 @return 灰度图片
 */
-(UIImage*)getGrayImage:(UIImage*)sourceImage;

@end
