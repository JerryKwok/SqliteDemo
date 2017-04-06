//
//  DBManager.h
//  SqliteDemo
//
//  Created by popo-fish on 2017/04/06.
//  Copyright © 2017年 popo-fish. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <sqlite3.h>

@interface DBManager : NSObject
{
    NSString *databasePath;
}

+(DBManager *)getSharedInstance;

-(BOOL)createDB;

-(BOOL) saveData:(NSString *)registerNumber name:(NSString *)name
      department:(NSString *)department year:(NSString *)year;

-(NSArray *) findByRegisterNumber:(NSString *)registerNumber;

@end
