//
//  NSURL+JonnyFoundation.h
//  JonnyFoundation
//
//  Created by wxn on 2016/10/14.
//  Copyright © 2016年 cn.ioslearner. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSURL (JonnyFoundation)
/**
 * Returns a one-to-many multiple items NSDictionary.
 * @see `NSDictionary (MultipleItems)` category
 */
- (NSDictionary *)queryDictionary;

@end
