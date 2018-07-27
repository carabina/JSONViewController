//
//  JSONView.h
//  JSONViewExample
//
//  Created by moises on 7/26/18.
//  Copyright © 2018 pie33.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JSONView : UIView
    @property (nonatomic, readonly) NSString *title;
- (instancetype) initWithDictionary:(NSDictionary *)dictionary;
@end
