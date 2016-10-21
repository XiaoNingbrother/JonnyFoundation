//
//  NSDate+Util.h
//  JonnyFoundation
//
//  Created by wxn on 2016/10/14.
//  Copyright © 2016年 cn.ioslearner. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (Util)
+ (BOOL)isSameDay:(NSDate *)firstDate andDate:(NSDate *)secondDate;
+ (NSInteger)daysBetweenDate:(NSDate *)firstDate andDate:(NSDate *)secondDate;
@end
