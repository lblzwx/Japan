//
//  NSDate+LBExtension.m
//  车聚酷
//
//  Created by lblzwx on 15-1-21.
//  Copyright (c) 2015年 车聚酷. All rights reserved.
//

#import "NSDate+LBExtension.h"

@implementation NSDate (LBExtension)

+(NSDate *)changeSpToTime:(NSString*)spString{
    
    NSDate *confromTimesp = [NSDate dateWithTimeIntervalSince1970:[spString intValue]];
    
    return confromTimesp;
}


@end
