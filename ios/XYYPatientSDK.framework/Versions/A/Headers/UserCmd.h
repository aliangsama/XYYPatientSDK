//
//  UserCmd.h
//  yaolianti-c
//
//  Created by zl on 2018/6/15.
//  Copyright © 2018年 hlw. All rights reserved.
//

#import "BaseCommand.h"
//登录
@interface UserLoginCmd :  BaseCommand
@property (nonatomic,nonnull,copy)NSString *phoneNum;
@property (nonatomic,nonnull,copy)NSString *password;
@end

