//
//  NSDate+LBExtension.h
//  车聚酷
//
//  Created by lblzwx on 15-1-21.
//  Copyright (c) 2015年 车聚酷. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (LBExtension)
/**
 * 时间戳转换成NSDate
 *
 *  @param spString 需要转换的时间戳
 *
 *  @return 凡是一个NSDate
 */
+(NSDate *)changeSpToTime:(NSString*)spString;


@end
