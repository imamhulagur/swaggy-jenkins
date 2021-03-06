//
// ResponseTimeMonitorData.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ResponseTimeMonitorData: JSONEncodable {
    public var _class: String?
    public var timestamp: Int32?
    public var average: Int32?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["_class"] = self._class
        nillableDictionary["timestamp"] = self.timestamp?.encodeToJSON()
        nillableDictionary["average"] = self.average?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
