//
//  UIView+Frame.h
//  车聚酷
//
//  Created by Aiuh on 14-12-31.
//  Copyright (c) 2014年 车聚酷. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Frame)

// @property如果写在分类里面就不会生成成员属性,只会生成get,set方法

// 快速设置控件的frame
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;


@end
