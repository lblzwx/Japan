//
//  UIButton+Extension.m
//  车聚酷
//
//  Created by Aiuh on 15-1-5.
//  Copyright (c) 2015年 车聚酷. All rights reserved.
//

#import "UIButton+Extension.h"
#import "LBButton.h"
@implementation UIButton (Extension)

+ (LBButton *)segmentedButtonWithTitle:(NSString *)title norImage:(UIImage *)norImage selImage:(UIImage *)selImage target:(id)target action:(SEL)action{
    
    LBButton *button = [LBButton buttonWithType:UIButtonTypeCustom];
    
    [button setTitle:title forState:UIControlStateNormal];
    
    [button setBackgroundImage:norImage forState:UIControlStateNormal];
    
    [button setBackgroundImage:selImage forState:UIControlStateSelected];
    
    [button setTitleColor:CJKColor(184, 0, 17) forState:UIControlStateNormal];
    
    [button setTitleColor:[UIColor whiteColor] forState:UIControlStateSelected];
    
    button.titleLabel.font = [UIFont systemFontOfSize:14];
    
    [button addTarget:target action:action forControlEvents:UIControlEventTouchUpInside];
    
    return button;
    
}

@end
