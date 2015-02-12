//
//  NSString+Extension.m
//  车聚酷
//
//  Created by lblzwx on 15-1-21.
//  Copyright (c) 2015年 车聚酷. All rights reserved.
//

#import "NSString+Extension.h"

@implementation NSString (Extension)

//将NSDate按yyyy-MM-dd格式时间输出
+(NSString *)changeSpToString:(NSString*)spString{
    
    NSDate *date = [NSDate changeSpToTime:spString];
    NSDateFormatter *dateFormat=[[NSDateFormatter alloc]init];
    [dateFormat setDateFormat:@"yyyy.MM.dd"];
    NSString* string=[dateFormat stringFromDate:date];
    return string;
}

//将NSDate按yyyy-MM-dd HH:mm:ss格式时间输出

+(NSString*)nsdateToString:(NSDate *)date{
    NSDateFormatter *dateFormat=[[NSDateFormatter alloc]init];
    [dateFormat setDateFormat:@"yyyy-MM-dd HH:mm:ss"];
    NSString* string=[dateFormat stringFromDate:date];
    return string;
}
//将NSDate按yyyy-MM-dd格式时间输出
+(NSString*)changeDateToString:(NSDate *)date{
    NSDateFormatter *dateFormat=[[NSDateFormatter alloc]init];
    [dateFormat setDateFormat:@"yyyy-MM-dd"];
    NSString* string=[dateFormat stringFromDate:date];
    return string;
}

//将yyyy-MM-dd HH:mm:ss格式时间转换成时间戳
+(long)changeTimeToTimeSp:(NSString *)timeStr{
    long time;
    NSDateFormatter *format=[[NSDateFormatter alloc] init];
    [format setDateFormat:@"yyyy-MM-dd HH:mm:ss"];
    NSDate *fromdate=[format dateFromString:timeStr];
    time= (long)[fromdate timeIntervalSince1970];
    return time;
}
//获取当前系统的yyyy-MM-dd HH:mm:ss格式时间
+(NSString *)getTime{
    NSDate *fromdate=[NSDate date];
    NSDateFormatter *dateFormat=[[NSDateFormatter alloc]init];
    [dateFormat setDateFormat:@"yyyy-MM-dd HH:mm:ss"];
    NSString* string=[dateFormat stringFromDate:fromdate];
    return string;
}

@end
