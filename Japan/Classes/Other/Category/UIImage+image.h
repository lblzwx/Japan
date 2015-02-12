//
//  UIImage+image.h
//  车聚酷
//
//  Created by Aiuh on 14-12-31.
//  Copyright (c) 2014年 车聚酷. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (image)

/**
 *  拉伸图片，不失真
 */
+ (UIImage *)resizableImageWithName:(NSString *)imageName;
/**
 *  获取一张纯色的图片
 */
+ (UIImage *)imageWithColor:(UIColor *)color;
/**
 *  根据尺寸缩放图片 image
 *
 *  @param image  所要缩放的图片
 *  @param size  尺寸
 *
 *  @return 缩放好的图片
 */
- (UIImage *) scaleFromImage: (UIImage *) image toSize: (CGSize) size;

-(UIImage *) imageCompressForWidth:(UIImage *)sourceImage targetWidth:(CGFloat)defineWidth;

-(UIImage *) imageCompressForSize:(UIImage *)sourceImage targetSize:(CGSize)size;
@end
