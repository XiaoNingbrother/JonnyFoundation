//
//  NSString+Date.h
//  JonnyFoundation
//
//  Created by wxn on 2016/10/14.
//  Copyright © 2016年 cn.ioslearner. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Date)
+ (NSString *)nowDateStringWithDateFormatString:(NSString *)dateFormateString;
+ (NSString *)dateStringWithDayIntervalSinceNow:(NSInteger)days dateFormateString:(NSString *)dateFormateString;
+ (NSString *)formattedMinuteSecondForDuration:(NSTimeInterval)duration;
@end
