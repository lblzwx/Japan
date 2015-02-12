//
//  UIButton+Extension.h
//  车聚酷
//
//  Created by Aiuh on 15-1-5.
//  Copyright (c) 2015年 车聚酷. All rights reserved.
//

#import <UIKit/UIKit.h>



@interface UIButton (Extension)
+ (UIButton *)segmentedButtonWithTitle:(NSString *)title norImage:(UIImage *)norImage selImage:(UIImage *)selImage target:(id)target action:(SEL)action;
@end
