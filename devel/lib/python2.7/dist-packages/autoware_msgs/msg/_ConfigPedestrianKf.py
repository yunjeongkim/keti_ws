# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from autoware_msgs/ConfigPedestrianKf.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class ConfigPedestrianKf(genpy.Message):
  _md5sum = "35fb5980cbba7f237457ede929c58aa9"
  _type = "autoware_msgs/ConfigPedestrianKf"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """Header header
int32 initial_lifespan
int32 default_lifespan
float32 noise_covariance
float32 measurement_noise_covariance
float32 error_estimate_covariance
float32 percentage_of_overlapping
int32 orb_features
int32 use_orb
================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id
"""
  __slots__ = ['header','initial_lifespan','default_lifespan','noise_covariance','measurement_noise_covariance','error_estimate_covariance','percentage_of_overlapping','orb_features','use_orb']
  _slot_types = ['std_msgs/Header','int32','int32','float32','float32','float32','float32','int32','int32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,initial_lifespan,default_lifespan,noise_covariance,measurement_noise_covariance,error_estimate_covariance,percentage_of_overlapping,orb_features,use_orb

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ConfigPedestrianKf, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.initial_lifespan is None:
        self.initial_lifespan = 0
      if self.default_lifespan is None:
        self.default_lifespan = 0
      if self.noise_covariance is None:
        self.noise_covariance = 0.
      if self.measurement_noise_covariance is None:
        self.measurement_noise_covariance = 0.
      if self.error_estimate_covariance is None:
        self.error_estimate_covariance = 0.
      if self.percentage_of_overlapping is None:
        self.percentage_of_overlapping = 0.
      if self.orb_features is None:
        self.orb_features = 0
      if self.use_orb is None:
        self.use_orb = 0
    else:
      self.header = std_msgs.msg.Header()
      self.initial_lifespan = 0
      self.default_lifespan = 0
      self.noise_covariance = 0.
      self.measurement_noise_covariance = 0.
      self.error_estimate_covariance = 0.
      self.percentage_of_overlapping = 0.
      self.orb_features = 0
      self.use_orb = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_2i4f2i().pack(_x.initial_lifespan, _x.default_lifespan, _x.noise_covariance, _x.measurement_noise_covariance, _x.error_estimate_covariance, _x.percentage_of_overlapping, _x.orb_features, _x.use_orb))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 32
      (_x.initial_lifespan, _x.default_lifespan, _x.noise_covariance, _x.measurement_noise_covariance, _x.error_estimate_covariance, _x.percentage_of_overlapping, _x.orb_features, _x.use_orb,) = _get_struct_2i4f2i().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_2i4f2i().pack(_x.initial_lifespan, _x.default_lifespan, _x.noise_covariance, _x.measurement_noise_covariance, _x.error_estimate_covariance, _x.percentage_of_overlapping, _x.orb_features, _x.use_orb))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 32
      (_x.initial_lifespan, _x.default_lifespan, _x.noise_covariance, _x.measurement_noise_covariance, _x.error_estimate_covariance, _x.percentage_of_overlapping, _x.orb_features, _x.use_orb,) = _get_struct_2i4f2i().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2i4f2i = None
def _get_struct_2i4f2i():
    global _struct_2i4f2i
    if _struct_2i4f2i is None:
        _struct_2i4f2i = struct.Struct("<2i4f2i")
    return _struct_2i4f2i
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
