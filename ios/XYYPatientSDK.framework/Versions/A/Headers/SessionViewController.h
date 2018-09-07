//
//  SessionViewController.h
//  CloudXinDemo
//
//  Created by mango on 16/8/25.
//  Copyright © 2016年 mango. All rights reserved.
//

#import "NIMSessionViewController.h"

@interface SessionViewController : NIMSessionViewController
@property(nonatomic,copy)NSString *strTitle;//聊天药店名称
@property (nonatomic,assign) BOOL disableCommandTyping;  //需要在导航条上显示“正在输入”

@end
