//
//  NSDate+Format.h
//  JonnyFoundation
//
//  Created by wxn on 2016/10/14.
//  Copyright © 2016年 cn.ioslearner. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (Format)
- (NSString *)stringWithDateFormatString:(NSString *)formateString;

+ (NSDate *)dateWithString:(NSString *)string
           formatterString:(NSString *)formatterString;
@end
