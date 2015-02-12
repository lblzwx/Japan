//
//  LBCommonButtom.m
//  Japan
//
//  Created by lblzwx on 15-2-12.
//  Copyright (c) 2015年 i-showing. All rights reserved.
//

#import "LBCommonButtom.h"
#define LBImageRadio 0.7

@interface LBCommonButtom ()

@property (nonatomic ,weak) UILabel *messageCountLabel;

@property (nonatomic,weak)UIView *viewBg;

@end

@implementation LBCommonButtom

- (instancetype)initWithFrame:(CGRect)frame
{
    if (self = [super initWithFrame:frame]) {
        
        [self setUpMessageCountLabel];
        
        [self.messageCountLabel setTextColor:[UIColor whiteColor]];
        
        [self.messageCountLabel setTextAlignment:NSTextAlignmentCenter];
        
        [self.messageCountLabel setFont:[UIFont systemFontOfSize:16]];
        
        // 设置文字对齐方式
        self.titleLabel.textAlignment = NSTextAlignmentCenter;
        
        self.titleLabel.font = [UIFont systemFontOfSize:14];
        
        [self setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
        
        [self setBackgroundImage:[UIImage imageNamed:@"我的"] forState:UIControlStateNormal];
        
    }
    return self;
}

- (void)drawRect:(CGRect)rect {
    
    self.layer.cornerRadius = 8;
    
    self.layer.masksToBounds = YES;
}

//去除高亮状态
- (void)setHighlighted:(BOOL)highlighted{}

- (void)setUpMessageCountLabel{
    
    UILabel *messageCountLabel = [[UILabel alloc]init];
    
    self.messageCountLabel = messageCountLabel;
    
    [self addSubview:messageCountLabel];
    
}

- (void)setMessage:(NSString *)message{
    
    _message = [message copy];
    
    self.messageCountLabel.text = _message;
}

- (void)layoutSubviews
{
    [super layoutSubviews];
    
    CGFloat imageX = 0;
    CGFloat imageY = 0;
    CGFloat imageH = self.height * LBImageRadio;
    CGFloat imageW = self.width;
    self.messageCountLabel.frame = CGRectMake(imageX, imageY, imageW, imageH);
    
    
    CGFloat titleY = imageH - 5;
    CGFloat titleX = 0;
    CGFloat titleW = imageW;
    CGFloat titleH = self.height - imageH;
    self.titleLabel.frame = CGRectMake(titleX, titleY, titleW, titleH);
    
}

@end
