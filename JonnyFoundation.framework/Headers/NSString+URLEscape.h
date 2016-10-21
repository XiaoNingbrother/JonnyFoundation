//
//  NSString+URLEscape.h
//  JonnyFoundation
//
//  Created by wxn on 2016/10/14.
//  Copyright © 2016年 cn.ioslearner. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (URLEscape)
- (NSString *)encodingStringUsingURLEscape;

- (NSString *)decodingStringUsingURLEscape;
@end
