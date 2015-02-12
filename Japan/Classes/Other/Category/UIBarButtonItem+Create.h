//
//  UIBarButtonItem+Create.h
//  车聚酷
//
//  Created by Aiuh on 14-12-31.
//  Copyright (c) 2014年 车聚酷. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (Create)
/**
 * 快速创建item
 */
+ (UIBarButtonItem *)itemWithImage:(UIImage *)image highImage:(UIImage *)highImage target:(id)target action:(SEL)action;

@end
