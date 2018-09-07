//
//  ViewUtil.h
//  Drugdisc
//
//  Created by huangliwen on 2018/3/21.
//  Copyright © 2018年 Drugdisc. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef NS_ENUM(NSInteger,JianBianColorType) {
    JianBianGreen          = 0, //绿色
    JianBianOrange         = 1, //橙色
    JianBianGary           = 2, //灰色
};
@interface ViewUtil : NSObject
+(void)setshadowColorToView:(UIView *)view;
+(void)setJianbianToView:(UIView *)view colorType:(JianBianColorType)colorType frame:(CGRect)frame;
@end
