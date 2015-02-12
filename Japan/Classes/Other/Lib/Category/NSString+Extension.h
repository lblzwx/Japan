//
//  NSString+Extension.h
//  车聚酷
//
//  Created by lblzwx on 15-1-21.
//  Copyright (c) 2015年 车聚酷. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Extension)
/**
 *  将NSDate按yyyy-MM-dd HH:mm:ss格式时间输出
 *
 *  @param date
 *
 *  @return 一个按yyyy-MM-dd HH:mm:ss格式时间输出NSDate
 */
+(NSString*)nsdateToString:(NSDate *)date;


/**
 *  yyyy-MM-dd HH:mm:ss格式时间转换成时间戳
 *
 *  @param timeStr 需要转换的时间戳
 *
 *  @return 一个按yyyy-MM-dd HH:mm:ss格式时间输出NSDate
 */
+(long)changeTimeToTimeSp:(NSString *)timeStr;

//将NSDate按yyyy-MM-dd格式时间输出
+(NSString*)changeDateToString:(NSDate *)date;

/**
 *  将时间戳按yyyy-MM-dd格式时间输出
 */
+(NSString *)changeSpToString:(NSString*)spString;



@end
