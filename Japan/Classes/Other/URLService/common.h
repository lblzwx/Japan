//
//  common.h
//  Japan
//
//  Created by lblzwx on 15-2-12.
//  Copyright (c) 2015年 i-showing. All rights reserved.
//

/**
 *  is iOS8？
 */
#define iOS8 ([[UIDevice currentDevice].systemVersion floatValue] >= 8.0)

#define DeviceVersion [[UIDevice alloc]init].systemVersion
/**
 *  随机颜色
 */
#define JRandomColor CJKColor(arc4random_uniform(256), arc4random_uniform(256), arc4random_uniform(256))
/**
 *  颜色
 */
#define JColor(r,g,b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0  blue:(b)/255.0  alpha:1]
/**
 *  keyWindow
 */
#define JKeywindow [UIApplication sharedApplication].keyWindow
/**
 *  mainScreen
 */
#define JScreenSizes [UIScreen mainScreen].bounds

/**
 *  mainScreen --->width
 */
#define JScreenWidth  CJKScreenSizes.size.width
#define JScreenHeight  CJKScreenSizes.size.height
// 生成一个字符串
#define NSStringWithFormat(...) [NSString stringWithFormat:__VA_ARGS__]


#define JNotificationCenter [NSNotificationCenter defaultCenter]
/**
 *  自定义Log
 */
#define JDevice [[UIDevice alloc]init].systemVersion

#ifdef DEBUG /// 调试阶段
#define JLog(...) NSLog(__VA_ARGS__)
#else // 发布阶段
#define JLog(...)
#endif
