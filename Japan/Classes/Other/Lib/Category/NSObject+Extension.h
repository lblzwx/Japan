//
//  NSObject+Extension.h
//  车聚酷
//
//  Created by Aiuh on 15-1-7.
//  Copyright (c) 2015年 车聚酷. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Extension)
/*
 *email 格式检查
 */

- (BOOL)isValidEmail;

/**
 *  密码长度，包含字符
 */

- (NSString *)isValidPassWord;

/**
 *  是否是大陆手机手机号
 */

- (BOOL)isValidPhoneNumber;
/*
 * 车牌号验证
 */
- (BOOL)isValidCarNo;

/** 网址验证 */
- (BOOL)isValidUrl;

/**
 @brief     是否符合IP格式，xxx.xxx.xxx.xxx
 */
- (BOOL)isValidIP;

/*
 * 身份证验证
 */
- (BOOL)isValidIdCardNum;

/**
 @brief     是否符合最小长度、最长长度，是否包含中文,首字母是否可以为数字
 @param     minLenth 账号最小长度
 @param     maxLenth 账号最长长度
 @param     containChinese 是否包含中文
 @param     firstCannotBeDigtal 首字母不能为数字
 @return    正则验证成功返回YES, 否则返回NO
 */
- (BOOL)isValidWithMinLenth:(NSInteger)minLenth
                   maxLenth:(NSInteger)maxLenth
             containChinese:(BOOL)containChinese
        firstCannotBeDigtal:(BOOL)firstCannotBeDigtal;



/*
 * 去掉两端空格和换行符
 */
- (NSString *)stringByTrimmingBlank;
@end
